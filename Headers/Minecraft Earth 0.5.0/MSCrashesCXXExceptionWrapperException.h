//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSException.h"

@interface MSCrashesCXXExceptionWrapperException : NSException
{
    const CDStruct_3098c0ae *_info;
}

@property(readonly, nonatomic) const CDStruct_3098c0ae *info; // @synthesize info=_info;
- (id)callStackReturnAddresses;
- (id)initWithCXXExceptionInfo:(const CDStruct_3098c0ae *)arg1;

@end

