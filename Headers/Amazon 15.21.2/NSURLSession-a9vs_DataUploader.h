//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLSession.h>

@class NSDateFormatter;

@interface NSURLSession (a9vs_DataUploader)
- (id)a9vs_uploaderTaskWithServerURL:(id)arg1 path:(id)arg2 filename:(id)arg3 data:(id)arg4 contentType:(id)arg5 authtoken:(id)arg6 sessionIdentifier:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (id)a9vs_uploaderTaskWithServerURL:(id)arg1 path:(id)arg2 filename:(id)arg3 data:(id)arg4 contentType:(id)arg5 authtoken:(id)arg6 sessionIdentifier:(id)arg7;
- (id)a9vs_finalURLWithServerURL:(id)arg1 path:(id)arg2 filename:(id)arg3 sessionIdentifier:(id)arg4;
- (id)a9vs_urlRequestForDataUploaderWithURL:(id)arg1 data:(id)arg2 contentType:(id)arg3 authtoken:(id)arg4;
@property(readonly, nonatomic) NSDateFormatter *a9vs_dataUploaderDateFormatter;
@end

