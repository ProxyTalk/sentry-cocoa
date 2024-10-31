#import "SentryBaseIntegration.h"

#import "SentryDefines.h"

#if TARGET_OS_IOS && SENTRY_HAS_UIKIT

NS_ASSUME_NONNULL_BEGIN

API_AVAILABLE(ios(13.0))
@interface SentryUserFeedbackIntegrationShell : SentryBaseIntegration

@end

NS_ASSUME_NONNULL_END

#endif // TARGET_OS_IOS && SENTRY_HAS_UIKIT