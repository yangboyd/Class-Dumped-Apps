//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CoralModel.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface ComAmazonBitproductModel_DealInfo : CoralModel <NSCoding, NSCopying>
{
    NSString *_dealId;
    NSString *_dealType;
    NSString *_dealStatus;
    NSNumber *_percentClaimed;
}

+ (id)type;
@property(retain, nonatomic) NSNumber *percentClaimed; // @synthesize percentClaimed=_percentClaimed;
@property(copy, nonatomic) NSString *dealStatus; // @synthesize dealStatus=_dealStatus;
@property(copy, nonatomic) NSString *dealType; // @synthesize dealType=_dealType;
@property(copy, nonatomic) NSString *dealId; // @synthesize dealId=_dealId;
- (void).cxx_destruct;

@end

