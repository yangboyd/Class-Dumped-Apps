//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SLKPasteboardWrapper : NSObject
{
    // Error parsing type: , name: pasteboard
    // Error parsing type: , name: configurationProfileChecker
}

- (void).cxx_destruct;
- (id)init;
- (void)setGifData:(id)arg1 checkPermissions:(_Bool)arg2;
- (void)setImage:(id)arg1 checkPermissions:(_Bool)arg2;
- (void)setString:(id)arg1 checkPermissions:(_Bool)arg2;
@property(nonatomic, readonly) NSString *string;

@end

