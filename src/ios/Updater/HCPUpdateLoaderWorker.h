//
//  HCPUpdateLoaderWorker.h
//
//  Created by Nikolay Demyankov on 11.08.15.
//

#import <Foundation/Foundation.h>
#import "HCPFilesStructure.h"
#import "HCPWorker.h"
#import "HCPUpdateRequest.h"

@protocol HCPUpdateLoaderWorkerDelegate
- (void)callBackProgress:(NSDictionary *)dic;
@end
/**
 *  Worker, that implements update download logic.
 *  During the download process events are dispatched to notify the subscribers about the progress.
 *  @see HCPWorker
 */
@interface HCPUpdateLoaderWorker : NSObject<HCPWorker>
@property (weak, nonatomic) id delegate;

/**
 *  Constructor.
 *
 *  @param request request parameters
 *
 *  @return object instance
 */
- (instancetype)initWithRequest:(HCPUpdateRequest *)request;

@end
