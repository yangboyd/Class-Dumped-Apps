//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleCaribouSmartmailLodgingReservation_Type, ComGoogleCaribouSmartmailOrganization, ComGoogleCaribouSmartmailReservationStatus, JCSAssignedId, JCSImage, JCSTime, NSString;

@protocol ComGoogleCaribouSmartmailLodgingReservationOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getReservationNumber;
- (_Bool)hasReservationNumber;
- (ComGoogleCaribouSmartmailReservationStatus *)getReservationStatus;
- (_Bool)hasReservationStatus;
- (JCSImage *)getImage;
- (_Bool)hasImage;
- (JCSTime *)getCheckoutDate;
- (_Bool)hasCheckoutDate;
- (JCSTime *)getCheckinDate;
- (_Bool)hasCheckinDate;
- (ComGoogleCaribouSmartmailOrganization *)getLodging;
- (_Bool)hasLodging;
- (ComGoogleCaribouSmartmailLodgingReservation_Type *)getType;
- (_Bool)hasType;
- (JCSAssignedId *)getAssignedId;
- (_Bool)hasAssignedId;
@end

