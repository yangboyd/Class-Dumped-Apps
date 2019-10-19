//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPSessionObserver-Protocol.h"
#import "SPTAppLogModelObserver-Protocol.h"

@class NSArray, NSDateFormatter, NSDictionary, NSString, SPCore, SPTAppLogModel, SPTTheme, UIColor;
@protocol SPTLogViewModelDelegate;

@interface SPTLogViewModel : NSObject <SPTAppLogModelObserver, SPSessionObserver>
{
    id <SPTLogViewModelDelegate> _delegate;
    NSString *_userNameTitle;
    NSString *_apAddressTitle;
    long long _logLevel;
    SPTAppLogModel *_appLogModel;
    SPCore *_core;
    NSDateFormatter *_formatter;
    SPTTheme *_theme;
    NSDictionary *_logLevelColors;
    UIColor *_debugLogMessageHighlightColor;
    UIColor *_labelDefaultTextColor;
}

@property(retain, nonatomic) UIColor *labelDefaultTextColor; // @synthesize labelDefaultTextColor=_labelDefaultTextColor;
@property(retain, nonatomic) UIColor *debugLogMessageHighlightColor; // @synthesize debugLogMessageHighlightColor=_debugLogMessageHighlightColor;
@property(retain, nonatomic) NSDictionary *logLevelColors; // @synthesize logLevelColors=_logLevelColors;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSDateFormatter *formatter; // @synthesize formatter=_formatter;
@property(nonatomic) __weak SPCore *core; // @synthesize core=_core;
@property(retain, nonatomic) SPTAppLogModel *appLogModel; // @synthesize appLogModel=_appLogModel;
@property(nonatomic) long long logLevel; // @synthesize logLevel=_logLevel;
@property(copy, nonatomic) NSString *apAddressTitle; // @synthesize apAddressTitle=_apAddressTitle;
@property(copy, nonatomic) NSString *userNameTitle; // @synthesize userNameTitle=_userNameTitle;
@property(nonatomic) __weak id <SPTLogViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)appLogModel:(id)arg1 logMessageAdded:(id)arg2;
- (void)updateSessionInformationFromSession:(id)arg1;
- (void)sessionLoginModeChanged:(id)arg1;
- (id)attributedStringFromMessage:(id)arg1;
- (id)messageAttributesForMessage:(id)arg1;
- (id)colorFromLogLevel:(int)arg1;
@property(readonly, nonatomic) NSArray *allMessages;
- (id)reverseArray:(id)arg1;
- (void)dealloc;
- (void)coreSessionChanged:(id)arg1;
- (id)initWithCore:(id)arg1 appLogModel:(id)arg2 theme:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

