//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AWSCore/AWSRequest.h>

@class NSNumber, NSString;

@interface AWSIoTListCertificatesByCARequest : AWSRequest
{
    NSNumber *_ascendingOrder;
    NSString *_caCertificateId;
    NSString *_marker;
    NSNumber *_pageSize;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) NSString *marker; // @synthesize marker=_marker;
@property(retain, nonatomic) NSString *caCertificateId; // @synthesize caCertificateId=_caCertificateId;
@property(retain, nonatomic) NSNumber *ascendingOrder; // @synthesize ascendingOrder=_ascendingOrder;
- (void).cxx_destruct;

@end

