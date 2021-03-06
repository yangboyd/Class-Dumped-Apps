//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Instabug/IBGCoding-Protocol.h>

@class NSString;
@protocol IBGAttachmentRequestCreator, IBGCachable;

@protocol IBGCachable <IBGCoding>

@optional
@property(retain, nonatomic) NSString *identifier;
- (void)send;
- (void)remove;
- (void)save;
- (_Bool)isFullySent;
- (void)mergeFrom:(id <IBGCachable>)arg1;
- (id <IBGAttachmentRequestCreator>)attachmentRequestCreator;
@end

