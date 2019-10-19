//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class CLLocation, NSDate;

@interface SCMapStatusConstraint : NSObject <NSCopying>
{
    CLLocation *_center;
    double _radius;
    NSDate *_expirationDate;
}

@property(readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, copy, nonatomic) CLLocation *center; // @synthesize center=_center;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCenter:(id)arg1 radius:(double)arg2 expirationDate:(id)arg3;

@end

