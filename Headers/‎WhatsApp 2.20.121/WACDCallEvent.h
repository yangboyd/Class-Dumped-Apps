//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStorageManagedObject.h>

@class NSDate, NSString;
@protocol WAServerDate;

@interface WACDCallEvent : WAStorageManagedObject
{
}


// Remaining properties
@property(nonatomic) long long bytesReceived; // @dynamic bytesReceived;
@property(nonatomic) long long bytesSent; // @dynamic bytesSent;
@property(copy, nonatomic) NSDate<WAServerDate> *date; // @dynamic date;
@property(nonatomic) double duration; // @dynamic duration;
@property(copy, nonatomic) NSString *groupJIDString; // @dynamic groupJIDString;
@property(nonatomic) short outcome; // @dynamic outcome;
@end

