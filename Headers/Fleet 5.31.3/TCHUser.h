//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TCHUser : NSObject
{
    shared_ptr_10707332 _userInternal;
}

@property(nonatomic) shared_ptr_10707332 userInternal; // @synthesize userInternal=_userInternal;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)unsubscribe;
- (_Bool)isSubscribed;
- (_Bool)isNotifiable;
- (_Bool)isOnline;
- (void)setAttributes:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)attributes;
@property(readonly, copy, nonatomic) NSString *identity;
- (void)setFriendlyName:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSString *friendlyName;
- (void)dealloc;
- (id)initWithUserPtr:(shared_ptr_10707332)arg1;

@end

