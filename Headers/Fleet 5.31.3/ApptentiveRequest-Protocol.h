//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Apptentive/NSObject-Protocol.h>

@class NSData, NSString;

@protocol ApptentiveRequest <NSObject>
@property(readonly, nonatomic) NSString *conversationIdentifier;
@property(readonly, nonatomic) _Bool encrypted;
@property(readonly, nonatomic) NSData *payload;
@property(readonly, nonatomic) NSString *contentType;
@property(readonly, nonatomic) NSString *method;
@property(readonly, nonatomic) NSString *path;
@property(readonly, nonatomic) NSString *apiVersion;
@end

