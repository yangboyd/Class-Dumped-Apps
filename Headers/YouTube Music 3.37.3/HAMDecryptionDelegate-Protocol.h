//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol HAMDecryptionDelegate <NSObject>
- (_Bool)decrypt:(char *)arg1 length:(unsigned long long)arg2 blockOffset:(unsigned long long)arg3 keyID:(NSData *)arg4 IV:(const char *)arg5 IVLength:(unsigned long long)arg6 error:(id *)arg7;
- (_Bool)canDecryptWithKeyID:(NSData *)arg1 PSSHKey:(NSData *)arg2;
- (void)setCryptoPeriodIndex:(long long)arg1;
- (_Bool)registerPSSHKey:(NSData *)arg1 error:(id *)arg2;
@end

