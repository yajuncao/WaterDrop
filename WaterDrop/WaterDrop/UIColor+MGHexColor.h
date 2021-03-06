//
//  UIColor+MGHexColor.h
//  WaterDrop
//
//  Created by acmeway on 2017/6/6.
//  Copyright © 2017年 acmeway. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (MGHexColor)


/**传入颜色的hex值(如#FFFFFF,oxffffff,ffffff)，返回对应的UIColor对象*/
+ (UIColor *)colorWithHex:(NSString *)hex;

/**传入颜色的hex值(如#FFFFFF,oxffffff,ffffff) 和alpha，返回对应的UIColor对象*/
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

@end
