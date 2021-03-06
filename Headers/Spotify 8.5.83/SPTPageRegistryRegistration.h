//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPageRegistrationToken-Protocol.h"

@class NSString;

@interface SPTPageRegistryRegistration : NSObject <SPTPageRegistrationToken>
{
    id _target;
    SEL _selector;
    CDUnknownBlockType _predicate;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) __weak id target; // @synthesize target=_target;
@property(readonly, copy) NSString *description;
- (id)createPageForURI:(id)arg1 context:(id)arg2;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 predicate:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

