//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCArchivedPredicate, PhotosMCCreationsPredicate, PhotosMCDatePredicate, PhotosMCEntityPredicate, PhotosMCFavoritesPredicate, PhotosMCImmersiveMediaPredicate, PhotosMCMotionPhotosPredicate, PhotosMCPersonPredicate, PhotosMCPlacePredicate, PhotosMCScannerPredicate, PhotosMCVideosPredicate;

@interface PhotosMCSearchPredicate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCArchivedPredicate *archivedPredicate; // @dynamic archivedPredicate;
@property(retain, nonatomic) PhotosMCCreationsPredicate *creationsPredicate; // @dynamic creationsPredicate;
@property(retain, nonatomic) PhotosMCDatePredicate *datePredicate; // @dynamic datePredicate;
@property(retain, nonatomic) PhotosMCEntityPredicate *entityPredicate; // @dynamic entityPredicate;
@property(retain, nonatomic) PhotosMCFavoritesPredicate *favoritesPredicate; // @dynamic favoritesPredicate;
@property(retain, nonatomic) PhotosMCImmersiveMediaPredicate *immersiveMediaPredicate; // @dynamic immersiveMediaPredicate;
@property(retain, nonatomic) PhotosMCMotionPhotosPredicate *motionPhotosPredicate; // @dynamic motionPhotosPredicate;
@property(retain, nonatomic) PhotosMCPersonPredicate *personPredicate; // @dynamic personPredicate;
@property(retain, nonatomic) PhotosMCPlacePredicate *placePredicate; // @dynamic placePredicate;
@property(readonly, nonatomic) int predicateOneOfCase; // @dynamic predicateOneOfCase;
@property(retain, nonatomic) PhotosMCScannerPredicate *scannerPredicate; // @dynamic scannerPredicate;
@property(retain, nonatomic) PhotosMCVideosPredicate *videosPredicate; // @dynamic videosPredicate;

@end

