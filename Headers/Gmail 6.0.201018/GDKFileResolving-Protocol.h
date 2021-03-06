//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDKFileOrError, NSString;
@protocol GDKFile;

@protocol GDKFileResolving <NSObject>
@property(readonly, nonatomic) _Bool upgradeWarningEnabled;
- (_Bool)isBrokenShortcut:(id <GDKFile>)arg1;
- (_Bool)isShortcut:(id <GDKFile>)arg1;
- (_Bool)isFolder:(id <GDKFile>)arg1;
- (NSString *)MIMETypeForFile:(id <GDKFile>)arg1;
- (id <GDKFile>)resolvedFileForFile:(id <GDKFile>)arg1;
- (GDKFileOrError *)resolveFile:(id <GDKFile>)arg1;
@end

