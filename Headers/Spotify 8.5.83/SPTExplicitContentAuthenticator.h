//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LAContext;

@interface SPTExplicitContentAuthenticator : NSObject
{
    LAContext *_context;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) LAContext *context; // @synthesize context=_context;
- (void)authenticateWithReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (id)initWithContext:(id)arg1;

@end

