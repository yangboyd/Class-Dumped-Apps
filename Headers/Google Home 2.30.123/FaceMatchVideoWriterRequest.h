//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface FaceMatchVideoWriterRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *enrollmentImageArray; // @dynamic enrollmentImageArray;
@property(readonly, nonatomic) unsigned long long enrollmentImageArray_Count; // @dynamic enrollmentImageArray_Count;
@property(retain, nonatomic) NSMutableArray *faceEnrollmentImageArray; // @dynamic faceEnrollmentImageArray;
@property(readonly, nonatomic) unsigned long long faceEnrollmentImageArray_Count; // @dynamic faceEnrollmentImageArray_Count;
@property(nonatomic) _Bool hasNumSessionImages; // @dynamic hasNumSessionImages;
@property(nonatomic) _Bool hasSessionId; // @dynamic hasSessionId;
@property(nonatomic) int numSessionImages; // @dynamic numSessionImages;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;

@end

