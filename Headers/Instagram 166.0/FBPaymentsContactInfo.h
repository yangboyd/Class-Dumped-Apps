//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import <FBSharedFramework/NSCoding-Protocol.h>
#import <FBSharedFramework/NSCopying-Protocol.h>

@class NSString;

@interface FBPaymentsContactInfo : FBValueObject <NSCopying, NSCoding>
{
    _Bool _isDefault;
    NSString *_id;
    NSString *_normalizedValue;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *normalizedValue; // @synthesize normalizedValue=_normalizedValue;
@property(readonly, nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;
- (id)initWithId:(id)arg1 isDefault:(_Bool)arg2 normalizedValue:(id)arg3;

@end

