//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBImageLoaderFactory-Protocol.h"

@protocol SPTHubImageLoadingLogger, SPTImageLoaderFactory;

@interface SPTHubImageLoaderFactory : NSObject <HUBImageLoaderFactory>
{
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTHubImageLoadingLogger> _logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTHubImageLoadingLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
- (id)createImageLoader;
- (id)initWithImageLoaderFactory:(id)arg1 logger:(id)arg2;

@end

