//
//  ViewController.m
//  TestDemo
//
//  Created by yyk on 2019/4/10.
//  Copyright © 2019年 yyk. All rights reserved.
//

#import "ViewController.h"
#import <YKImagePicker/YKImagePicker.h>
@interface ViewController ()<YKImagesViewDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    YKShowImagesView *showImageView = [[YKShowImagesView alloc] initWithFrame:CGRectMake(0, 44, [UIScreen mainScreen].bounds.size.width, 400) presentVCDelegate:self showCountRowInView:4 margin:20];
    [self.view addSubview:showImageView];
}

#pragma mark - YKImagesViewDelegate
- (void)getSelectedImages:(NSMutableArray *)imgs{
    NSLog(@"-----%@",imgs);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
