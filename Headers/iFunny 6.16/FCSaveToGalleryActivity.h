//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

#import <Funny/UIAlertViewDelegate-Protocol.h>

@class NSData, NSString, NSURL, UIImage;

@interface FCSaveToGalleryActivity : UIActivity <UIAlertViewDelegate>
{
    UIImage *image;
    NSURL *videoURL;
    NSURL *gifURL;
    NSData *gifData;
    CDUnknownBlockType downloadAdditionalDataBlock;
    NSString *photoAlbumName;
}

- (void).cxx_destruct;
- (void)saveToGaleryEndedWithError:(id)arg1;
- (void)save;
- (void)prepareToSave;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithPhotoAlbumName:(id)arg1 downloadAdditionalDataBlock:(CDUnknownBlockType)arg2 gifURL:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

