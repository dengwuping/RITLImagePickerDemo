//
//  RITLPhotoBrowerController.h
//  RITLPhotoDemo
//
//  Created by YueWen on 2016/12/29.
//  Copyright © 2016年 YueWen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RITLCollectionViewModel.h"
#import "RITLPhotoViewController.h"

NS_ASSUME_NONNULL_BEGIN

@interface RITLPhotoBrowerController : UIViewController <RITLPhotoViewController>

/// 当前控制器的viewModel
@property (nonatomic, strong) id <RITLCollectionViewModel> viewModel;

@end


@interface RITLPhotoBrowerController (updateNumberOfLabel)

/**
 更新选中的图片数
 
 @param number 选中的图片数
 */
- (void)updateNumbersForSelectAssets:(NSUInteger)number;

@end

NS_ASSUME_NONNULL_END
