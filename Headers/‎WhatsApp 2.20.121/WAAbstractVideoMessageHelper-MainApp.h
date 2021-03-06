//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAAbstractVideoMessageHelper.h>

@interface WAAbstractVideoMessageHelper (MainApp)
+ (id)fullImageFromURL:(id)arg1 ofType:(id)arg2;
+ (_Bool)needsImageLoader;
- (_Bool)requiresNetworkFetchForLargeImageWithInfo:(id)arg1;
- (struct CGSize)transformedLargeImageSizeWithOriginalImageSizeInPixels:(struct CGSize)arg1;
- (id)largeImageForMessageImageLoaderWithInfo:(id)arg1;
- (id)smallImageForMessageImageLoaderWithInfo:(id)arg1;
- (id)newImageLoaderInfo;
- (id)activityItemSubjectText;
- (double)blurredImageMaximumWidth;
@end

