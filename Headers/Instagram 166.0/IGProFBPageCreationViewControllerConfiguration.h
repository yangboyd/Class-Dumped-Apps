//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGProFBPageCreationViewControllerOverrides, NSString;

@interface IGProFBPageCreationViewControllerConfiguration : NSObject
{
    _Bool _shouldAllowSkip;
    _Bool _shouldUseBottomNavigation;
    NSString *_suggestedPageName;
    long long _verticalID;
    NSString *_navigationTitle;
    long long _toAccountType;
    IGProFBPageCreationViewControllerOverrides *_overrides;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGProFBPageCreationViewControllerOverrides *overrides; // @synthesize overrides=_overrides;
@property(readonly, nonatomic) long long toAccountType; // @synthesize toAccountType=_toAccountType;
@property(readonly, copy, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(readonly, nonatomic) long long verticalID; // @synthesize verticalID=_verticalID;
@property(readonly, copy, nonatomic) NSString *suggestedPageName; // @synthesize suggestedPageName=_suggestedPageName;
@property(readonly, nonatomic) _Bool shouldUseBottomNavigation; // @synthesize shouldUseBottomNavigation=_shouldUseBottomNavigation;
@property(readonly, nonatomic) _Bool shouldAllowSkip; // @synthesize shouldAllowSkip=_shouldAllowSkip;
- (id)initWithShouldAllowSkip:(_Bool)arg1 suggestedPageName:(id)arg2 verticalID:(long long)arg3 navigationTitle:(id)arg4 toAccountType:(long long)arg5 overrides:(id)arg6;

@end

