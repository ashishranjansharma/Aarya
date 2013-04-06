//
//  ARYAModelController.h
//  Aarya
//
//  Created by Ashish R Sharma on 4/6/13.
//  Copyright (c) 2013 Ashish R Sharma. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ARYADataViewController;

@interface ARYAModelController : NSObject <UIPageViewControllerDataSource>

- (ARYADataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(ARYADataViewController *)viewController;

@end
