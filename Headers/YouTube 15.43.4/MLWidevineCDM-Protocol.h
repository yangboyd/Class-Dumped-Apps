//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/MLCDM-Protocol.h>

@class NSData, NSString;

@protocol MLWidevineCDM <MLCDM>
+ (id)new;
+ (id)alloc;
- (_Bool)updateSessionWithID:(NSString *)arg1 withLicense:(NSData *)arg2 error:(id *)arg3;
- (_Bool)generateLicenseRequestForSessionID:(NSString *)arg1 PSSHKey:(NSData *)arg2 error:(id *)arg3;
- (_Bool)closeSessionWithID:(NSString *)arg1 error:(id *)arg2;
@end

