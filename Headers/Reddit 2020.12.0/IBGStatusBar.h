//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IBGStatusBar : NSObject
{
    _Bool _defaultPrefersStatusBarHidden;
    _Bool _defaultApplicationStatusBarHidden;
    _Bool _hidden;
    long long _defaultPreferredStatusBarStyle;
}

@property(nonatomic) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) _Bool defaultApplicationStatusBarHidden; // @synthesize defaultApplicationStatusBarHidden=_defaultApplicationStatusBarHidden;
@property(nonatomic) long long defaultPreferredStatusBarStyle; // @synthesize defaultPreferredStatusBarStyle=_defaultPreferredStatusBarStyle;
@property(nonatomic) _Bool defaultPrefersStatusBarHidden; // @synthesize defaultPrefersStatusBarHidden=_defaultPrefersStatusBarHidden;
@property(readonly, nonatomic) long long preferredStatusBarStyle;
@property(readonly, nonatomic) _Bool prefersStatusBarHidden;
- (void)setDefaultPrefersStatusBarHidden:(_Bool)arg1 preferredStatusBarStyle:(long long)arg2 applicationStatusBarHidden:(_Bool)arg3;

@end

