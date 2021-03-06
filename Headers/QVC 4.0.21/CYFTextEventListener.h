//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CYFTextEventListenerDelegate;

@interface CYFTextEventListener : NSObject
{
    id <CYFTextEventListenerDelegate> _textEventRecorder;
    id _currentField;
    long long _textChangeEventAllowedLimit;
    long long _totalTextEventCount;
    long long _previousTextCount;
    NSString *_prevAddress;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *prevAddress; // @synthesize prevAddress=_prevAddress;
@property(nonatomic) long long previousTextCount; // @synthesize previousTextCount=_previousTextCount;
@property(nonatomic) long long totalTextEventCount; // @synthesize totalTextEventCount=_totalTextEventCount;
@property(nonatomic) long long textChangeEventAllowedLimit; // @synthesize textChangeEventAllowedLimit=_textChangeEventAllowedLimit;
@property(retain, nonatomic) id currentField; // @synthesize currentField=_currentField;
@property(nonatomic) __weak id <CYFTextEventListenerDelegate> textEventRecorder; // @synthesize textEventRecorder=_textEventRecorder;
- (_Bool)isCurrentEventCopyPaste:(id)arg1 noOfChar:(long long)arg2 withEventType:(unsigned long long)arg3;
- (void)enqueueTextDataOfField:(id)arg1 withEventType:(unsigned long long)arg2;
- (void)textWidgetTextDidEndEditing:(id)arg1;
- (void)textWidgetTextDidChange:(id)arg1;
- (void)textWidgetTextDidBeginEditing:(id)arg1;
- (long long)getTextChangeEventCount;
- (long long)getTotalTextEventCount;
- (void)configureTextEventNotifications;
- (void)dealloc;
- (id)initWithEventRecorder:(id)arg1;
- (id)init;

@end

