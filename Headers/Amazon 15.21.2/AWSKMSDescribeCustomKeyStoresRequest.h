//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSRequest.h"

@class NSNumber, NSString;

@interface AWSKMSDescribeCustomKeyStoresRequest : AWSRequest
{
    NSString *_customKeyStoreId;
    NSString *_customKeyStoreName;
    NSNumber *_limit;
    NSString *_marker;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *marker; // @synthesize marker=_marker;
@property(retain, nonatomic) NSNumber *limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSString *customKeyStoreName; // @synthesize customKeyStoreName=_customKeyStoreName;
@property(retain, nonatomic) NSString *customKeyStoreId; // @synthesize customKeyStoreId=_customKeyStoreId;
- (void).cxx_destruct;

@end

