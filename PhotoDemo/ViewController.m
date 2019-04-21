//
//  ViewController.m
//  PhotoDemo
//
//  Created by Setven on 2019/4/19.
//  Copyright © 2019 Setven. All rights reserved.
//

#import "ViewController.h"
#import "CTImagePreviewViewController.h"
#import "CTPictureBrowser.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
}

- (IBAction)clcik:(id)sender {
    NSArray *imageArr = @[@"https://ss1.bdstatic.com/70cFvXSh_Q1YnxGkpoWK1HF6hhy/it/u=2735633715,2749454924&fm=27&gp=0.jpg",@"https://ss0.bdstatic.com/70cFvHSh_Q1YnxGkpoWK1HF6hhy/it/u=3967239004,1951414302&fm=27&gp=0.jpg"];
    [CTPictureBrowser showPictureWithUrlOrImages:imageArr withCurrentPageNum:0];
}

@end
