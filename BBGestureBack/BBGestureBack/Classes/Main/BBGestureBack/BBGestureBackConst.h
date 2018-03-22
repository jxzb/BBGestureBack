//
//  BBGestureBackConst.h
//  BBGestureBack
//
//  Created by user on 2018/3/22.
//  Copyright © 2018年 Bonway. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <objc/message.h>

// 日志输出
#ifdef DEBUG
#define BBLog(...) NSLog(__VA_ARGS__)
#else
#define BBLog(...)
#endif

// 弱引用
#define BBWeakSelf __weak typeof(self) weakSelf = self;

// 过期提醒
#define BBDeprecated(instead) NS_DEPRECATED(2_0, 2_0, 2_0, 2_0, instead)

// 运行时objc_msgSend
#define BBObjectMsgSend(...) ((void (*)(void *, SEL, UIView *))objc_msgSend)(__VA_ARGS__)
#define BBObjectMsgTarget(target) (__bridge void *)(target)

// RGB颜色
#define BBColor(r, g, b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1.0]

UIKIT_EXTERN const CGFloat BBDistanceToLeft;
