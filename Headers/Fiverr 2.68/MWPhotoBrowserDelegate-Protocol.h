//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MWCaptionView, MWPhotoBrowser, NSString, NSURL;
@protocol MWPhoto;

@protocol MWPhotoBrowserDelegate <NSObject>
- (id <MWPhoto>)photoBrowser:(MWPhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(MWPhotoBrowser *)arg1;

@optional
- (void)photoBrowser:(MWPhotoBrowser *)arg1 actionButtonPressedForPhotoURL:(NSURL *)arg2 buttonType:(unsigned long long)arg3;
- (void)photoBrowserDidFinishModalPresentation:(MWPhotoBrowser *)arg1;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 photoAtIndex:(unsigned long long)arg2 selectedChanged:(_Bool)arg3;
- (_Bool)photoBrowser:(MWPhotoBrowser *)arg1 isPhotoSelectedAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 actionButtonPressedForPhotoAtIndex:(unsigned long long)arg2;
- (void)photoBrowser:(MWPhotoBrowser *)arg1 didDisplayPhotoAtIndex:(unsigned long long)arg2;
- (NSString *)photoBrowser:(MWPhotoBrowser *)arg1 titleForPhotoAtIndex:(unsigned long long)arg2;
- (MWCaptionView *)photoBrowser:(MWPhotoBrowser *)arg1 captionViewForPhotoAtIndex:(unsigned long long)arg2;
- (id <MWPhoto>)photoBrowser:(MWPhotoBrowser *)arg1 thumbPhotoAtIndex:(unsigned long long)arg2;
@end

