//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNotificationCenter;
@protocol YTShareKeyboardHelperDelegate;

@interface YTShareKeyboardHelper : NSObject
{
    id <YTShareKeyboardHelperDelegate> _delegate;
    NSNotificationCenter *_nsCenter;
}

+ (id)keyboardHelperWithDelegate:(id)arg1;
- (void).cxx_destruct;
- (void)keyboardWillChange:(id)arg1;
- (void)deactivate;
- (void)activate;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 notification:(id)arg2;

@end

