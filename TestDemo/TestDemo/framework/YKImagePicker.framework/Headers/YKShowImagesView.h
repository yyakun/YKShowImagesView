//
//  YKShowImagesView.h
//  YKImagePicker
//
//  Created by yyk on 2019/4/9.
//  Copyright © 2019年 yyk. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol YKImagesViewDelegate <NSObject>
@optional
//获取选中的图片
- (void)getSelectedImages:(NSMutableArray *)imgs;
@end
@interface YKShowImagesView : UIView

/**
 相册每行展示的图片数量,默认为4
 */
@property (nonatomic, assign) NSUInteger rowInAlbum;

/**
 可选最大照片数量 默认为9
 */
@property (nonatomic, assign) NSUInteger selectedMaxCount;

/**
 初始化方法

 @param frame 展示在父视图的frame
 @param count 一行显示几张图片  默认4
 @param margin 每个item间距    默认15
 @param delegate 模态弹出相册和控制器和接收代理回调的图片
 @return 初始化Obj
 */
- (instancetype)initWithFrame:(CGRect)frame
            presentVCDelegate:(UIViewController <YKImagesViewDelegate>*)delegate
           showCountRowInView:(NSUInteger)count
                       margin:(CGFloat)margin;


@end
