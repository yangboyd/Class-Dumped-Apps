//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLogCenter;

@interface SPTLoginSetNewPasswordLogger : NSObject
{
    long long _currentLogSource;
    id <SPTLogCenter> _logCenter;
}

@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) long long currentLogSource; // @synthesize currentLogSource=_currentLogSource;
- (void).cxx_destruct;
- (id)pageURIFromSource:(long long)arg1 withError:(id)arg2;
- (void)logImpressionWithPageURI:(id)arg1;
- (void)logInteractionWithIntent:(id)arg1 fromSource:(long long)arg2;
- (void)logUserDidSeeScreenWithError:(id)arg1;
- (void)logUserDidTapCancelButton;
- (void)logUserDidTapSubmitButton;
- (void)logUserDidInteractWithPasswordField;
- (void)logUserDidSeeNewPasswordSetScreen;
- (void)logUserDidSeeSetNewPasswordScreen;
- (id)initWithLogger:(id)arg1;

@end

