//
//  SPFViewController.m
//  StockPriceFetcher
//
//  Created by Justin Driscoll on 9/3/12.
//  Copyright (c) 2012 Justin Driscoll. All rights reserved.
//

#import "SPFViewController.h"
#import "SPFPriceFetcher.h"


@interface SPFViewController ()
@property (strong, nonatomic) SPFPriceFetcher *quoter;
@property(strong,nonatomic)NSMutableArray *notificationName;
@property(strong,nonatomic)NSMutableArray *notificationDescription;
@end


@implementation SPFViewController

-(NSTimer *)timer {
    if (!_timer) {
        self.timer = [[NSTimer alloc]init];
    }
    return self.timer;
}
-(NSMutableArray *)notificationName{
    if (!_notificationName) {
        _notificationName = [[NSMutableArray alloc]init];
    }
    return _notificationName;
}

-(NSMutableArray *)notificationDescription{
    if (_notificationDescription) {
        _notificationDescription  = [[NSMutableArray alloc]init];
        
    }
    return _notificationDescription;
}

-(void)viewDidLoad{
    [super viewDidLoad];
    [[NSNotificationCenter defaultCenter]addObserver:self selector:@selector(onNotification:) name:nil object:nil];
    self.myTextView = [self makeMyTextView];
   
    self.myTextView.text = [self doThisNow];
    [NSTimer scheduledTimerWithTimeInterval:2 target:self selector:@selector(doThisNow) userInfo:nil repeats:YES];
    
    self.myTextView.alpha = 0.3;
    [self.view addSubview:self.myTextView];
}

-(NSString *)doThisNow{
    
    NSArray *list = [self.notificationName mutableCopy];
    for (NSString *something in list) {
        self.myTextView.text = something;
    }
    return self.myTextView.text;
    
}

-(void)onNotification:(NSNotification *)notification{
    NSLog(@"Notification name is %@ sent by %@",notification.name,[[notification object]description]);
    [self.notificationName addObject:notification.name];
    [self.notificationDescription addObject:[[notification object]description]];
    
}

-(UITextView *)makeMyTextView{
    UITextView *textV = [[UITextView alloc]initWithFrame:CGRectMake(20, 20, 400, 400)];
    [textV.layer setBorderColor:[[[UIColor grayColor]colorWithAlphaComponent:0.5]CGColor]];
    [textV.layer setBorderWidth:2.0];
    textV.layer.cornerRadius = 5;
    textV.clipsToBounds = YES;
    return textV;
}

- (void)viewDidAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
    [self.stockSymbolTextField becomeFirstResponder];
}

- (IBAction)getPrice:(id)sender {
    SPFQuoteRequestCompleteBlock callback = ^(BOOL wasSuccessful, NSDecimalNumber *price) {
        if (wasSuccessful) {
            self.priceLabel.text = [NSString stringWithFormat:@"Latest price: $%@", [price stringValue]];
        } else {
            self.priceLabel.text = @"Unable to fetch price. Try again.";
        }
    };

    [self.quoter requestQuoteForSymbol:self.stockSymbolTextField.text
                          withCallback:callback];
}

- (SPFPriceFetcher *)quoter
{
    if (!_quoter) {
        self.quoter = [[SPFPriceFetcher alloc] init];
    }

    return _quoter;
}

@end
