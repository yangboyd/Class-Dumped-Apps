//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GAKMessenger, NSInvocation;

@interface GAKMessage : NSObject
{
    GAKMessenger *_messenger;
    NSInvocation *_invocation;
    unsigned long long _numArguments;
    unsigned long long _argumentsDataLength;
    unsigned long long *_argumentOffsets;
    unsigned long long *_argumentSizes;
}

- (void)dealloc;
- (id)initWithInvocation:(id)arg1;

@end

