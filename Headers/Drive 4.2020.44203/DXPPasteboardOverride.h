//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DXPPasteboardOverriding-Protocol.h"

@protocol DXPPasteboardOverrideDelegate;

@interface DXPPasteboardOverride : NSObject <DXPPasteboardOverriding>
{
    _Bool _enabled;
    id <DXPPasteboardOverrideDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) __weak id <DXPPasteboardOverrideDelegate> delegate; // @synthesize delegate=_delegate;
- (id)originalGeneralPasteboard;
- (id)init;

@end

