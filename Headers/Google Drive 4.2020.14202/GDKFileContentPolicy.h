//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDKFileContentPolicy : NSObject
{
}

+ (long long)optimizedImageSizePx;
+ (id)scaledImageContentURLForFile:(id)arg1;
+ (id)ZIPContentURLForFile:(id)arg1;
+ (id)PDFContentURLForFile:(id)arg1;
+ (id)rawContentURLForFile:(id)arg1 backendInstance:(id)arg2;
+ (id)mimeTypeForExportingFile:(id)arg1;
+ (id)mimeTypeForPrintingFile:(id)arg1;
+ (id)mimeTypeForViewingFile:(id)arg1;
+ (id)mimeTypeForFile:(id)arg1 inContext:(int)arg2;
+ (id)downloadRequestForFile:(id)arg1 context:(int)arg2 backendInstance:(id)arg3;
+ (id)downloadRequestForFile:(id)arg1 context:(int)arg2;

@end

