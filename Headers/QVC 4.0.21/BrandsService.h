//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QCServiceOperationHandler.h"

@interface BrandsService : QCServiceOperationHandler
{
    CDUnknownBlockType successBlock;
    CDUnknownBlockType errorBlock;
}

+ (id)webServiceURL;
- (void).cxx_destruct;
- (void)setErrorBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)errorBlock;
- (void)setSuccessBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)successBlock;
- (id)initWithParameters:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;

@end

