//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (GTMZlibAdditionsPrivate)
+ (id)gtm_dataByInflatingBytes:(const void *)arg1 length:(unsigned long long)arg2 isRawData:(_Bool)arg3;
+ (id)gtm_dataByCompressingBytes:(const void *)arg1 length:(unsigned long long)arg2 compressionLevel:(int)arg3 mode:(int)arg4;
@end

