//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGImageDataCaching-Protocol.h>
#import <FBSharedFramework/IGImageImageCaching-Protocol.h>
#import <FBSharedFramework/MOSImageDownloaderCaching-Protocol.h>

@protocol MOSImageMetadataCaching;

@protocol IGImageCaching <MOSImageDownloaderCaching, IGImageImageCaching, IGImageDataCaching>
@property(readonly, nonatomic) id <MOSImageMetadataCaching> metadataCache;
@end

