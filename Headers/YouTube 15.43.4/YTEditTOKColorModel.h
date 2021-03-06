//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface YTEditTOKColorModel : NSObject
{
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    NSString *_primaryColorAccessibility;
    NSString *_secondaryColorAccessibility;
}

+ (id)white4Color;
+ (id)white3Color;
+ (id)white2Color;
+ (id)gray4Color;
+ (id)gray3Color;
+ (id)gray2Color;
+ (id)gray1Color;
+ (id)black3Color;
+ (id)black2Color;
+ (id)navyColor;
+ (id)tealColor;
+ (id)forestColor;
+ (id)brownColor;
+ (id)beigeColor;
+ (id)khakiColor;
+ (id)peachColor;
+ (id)lavenderColor;
+ (id)magentaColor;
+ (id)pinkColor;
+ (id)purpleColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)yellowColor;
+ (id)orangeColor;
+ (id)redColor;
+ (id)blackColor;
+ (id)whiteColor;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *secondaryColorAccessibility; // @synthesize secondaryColorAccessibility=_secondaryColorAccessibility;
@property(readonly, copy, nonatomic) NSString *primaryColorAccessibility; // @synthesize primaryColorAccessibility=_primaryColorAccessibility;
@property(readonly, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(readonly, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
- (id)initWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2 primaryColorAccessibility:(id)arg3 secondaryColorAccessibility:(id)arg4;

@end

