//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont, UIImage;

@interface BDPlatformSDKConfigurationOld : NSObject
{
    _Bool _navBarTranslucent;
    UIColor *_navBarTintColor;
    UIColor *_navBarHairlineColor;
    UIFont *_navBarTitleFont;
    UIColor *_navBarTitleColor;
    UIImage *_leftBarButtonImage;
    UIFont *_navBarButtonFont;
    UIColor *_navBarButtonColor;
    NSString *_loginButtonColorString;
    CDUnknownBlockType _networkReachabilityBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType networkReachabilityBlock; // @synthesize networkReachabilityBlock=_networkReachabilityBlock;
@property(copy, nonatomic) NSString *loginButtonColorString; // @synthesize loginButtonColorString=_loginButtonColorString;
@property(retain, nonatomic) UIColor *navBarButtonColor; // @synthesize navBarButtonColor=_navBarButtonColor;
@property(retain, nonatomic) UIFont *navBarButtonFont; // @synthesize navBarButtonFont=_navBarButtonFont;
@property(retain, nonatomic) UIImage *leftBarButtonImage; // @synthesize leftBarButtonImage=_leftBarButtonImage;
@property(retain, nonatomic) UIColor *navBarTitleColor; // @synthesize navBarTitleColor=_navBarTitleColor;
@property(retain, nonatomic) UIFont *navBarTitleFont; // @synthesize navBarTitleFont=_navBarTitleFont;
@property(retain, nonatomic) UIColor *navBarHairlineColor; // @synthesize navBarHairlineColor=_navBarHairlineColor;
@property(retain, nonatomic) UIColor *navBarTintColor; // @synthesize navBarTintColor=_navBarTintColor;
@property(nonatomic) _Bool navBarTranslucent; // @synthesize navBarTranslucent=_navBarTranslucent;
- (id)init;

@end

