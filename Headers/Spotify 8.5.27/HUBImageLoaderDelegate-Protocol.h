//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSURL, UIImage;
@protocol HUBImageLoader;

@protocol HUBImageLoaderDelegate
- (void)imageLoader:(id <HUBImageLoader>)arg1 didFailLoadingImageForURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)imageLoader:(id <HUBImageLoader>)arg1 didLoadImage:(UIImage *)arg2 forURL:(NSURL *)arg3;
@end

