//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface GRWGoogleAppsListOptions : NSObject
{
    long long _sectionMask;
    long long _headerMode;
    long long _headerStyle;
    UIColor *_headerHairlineColor;
    long long _appStorePresentationStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long appStorePresentationStyle; // @synthesize appStorePresentationStyle=_appStorePresentationStyle;
@property(retain, nonatomic) UIColor *headerHairlineColor; // @synthesize headerHairlineColor=_headerHairlineColor;
@property(nonatomic) long long headerStyle; // @synthesize headerStyle=_headerStyle;
@property(nonatomic) long long headerMode; // @synthesize headerMode=_headerMode;
@property(nonatomic) long long sectionMask; // @synthesize sectionMask=_sectionMask;
- (id)init;

@end

