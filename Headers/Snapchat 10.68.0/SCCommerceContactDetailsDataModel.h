//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCommerceContactDetailsDataModel : NSObject <NSCopying>
{
    NSString *_email;
    NSString *_phone;
}

@property(readonly, copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEmail:(id)arg1 phone:(id)arg2;

@end

