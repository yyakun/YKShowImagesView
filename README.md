##介绍
针对与类似微信发朋友圈,选择相册的业务场景,封装成framwork,初始化简单,只需两行代码即可搞定;
YKShowImagesView *showImageView = [[YKShowImagesView alloc] initWithFrame:CGRectMake(0, 44, [UIScreen mainScreen].bounds.size.width, 400) presentVCDelegate:self showCountRowInView:4 margin:20];
[self.view addSubview:showImageView];



使用
1.##引入头文件

#import <YKImagePicker/YKImagePicker.h>

2.#初始化一个YKShowImagesView
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

3.##使用YKImagesViewDelegate 回调获取选中的照片

###使用注意
1.因需要使用系统相册和相机,需在主工程infoplist设置NSPhotoLibraryUsageDescription,NSCameraUsageDescription;
2.主工程需要把bitcode 设为NO;


