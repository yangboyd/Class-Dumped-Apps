//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SlackKit/_TtP8SlackKit19SlackColorInterface_-Protocol.h>

@interface _TtC8SlackKit10SlackColor : NSObject <_TtP8SlackKit19SlackColorInterface_>
{
    // Error parsing type: , name: _mode
    // Error parsing type: , name: dispatchQueue
}

+ (id)shared;
+ (id)modeUpdatedNotification;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) long long barStyle;
@property(nonatomic, readonly) long long activityIndicatorViewStyle;
@property(nonatomic, readonly) long long preferredStatusBarStyle;
@property(nonatomic, readonly) long long keyboardAppearance;
- (_Bool)isDarkMode;
- (_Bool)isNormalMode;
- (void)toggleMode;
- (void)setModeWithMode:(long long)arg1;

@end

